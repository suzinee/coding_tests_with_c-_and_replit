/*
2020-10-19 p118
2020-10-26 
*/
#include <bits/stdc++.h>
using namespace std;
string inputData;

// 나이트가 이동할 수 있는 8가지 방향 정의
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int simulation_knight(void)
{
  // 현재 나이트의 위치 입력받기
  cin >> inputData;
  int row = inputData[1] - '0';
  int column = inputData[0] - 'a' + 1;

  // 8가지 방향에 대하여 이동 가능 확인
  int result = 0;
  for (int i=0; i<8; i++)
  {
    int nextRow = row + dx[i];
    int nextColumn = column + dy[i];
    // 8x8 좌표 평면 범위 내 속할 경우 이동 가능함 --> 카운트 증가
    if(nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) result += 1;
  }

  cout << result << '\n';

  return 0;
}