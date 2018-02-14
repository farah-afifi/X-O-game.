index= [[1,2,3], [4,5,6],[7,8,9]]
for i in range(3):
  for j in range(3):
    print(index[i][j], end=' ')
  print('')
for i in range(9):
  if (i%2==0):
    print("player 1's turn:")
    print('please pick the position you want to place X at:')
    position=input()
    for k in range(3):
      for h in range(3):
        if index[k][h]==int(position):
          index[k][h]="X"
        print(index[k][h], end=' ')
      print('')
    if ((index[0][0]=='X' and index[1][1]=='X' and index[2][2]=='X')or(index[0][2]=='X' and index[1][1]=='X' and index[2][0]=='X')or
      (index[0][0]=='X' and index[0][1]=='X' and index[0][2]=='X')or
      (index[1][0]=='X' and index[1][1]=='X' and index[1][2]=='X')or
      (index[2][0]=='X' and index[2][1]=='X' and index[2][2]=='X')or
      (index[0][0]=='X' and index[1][0]=='X' and index[2][0]=='X')or
      (index[0][1]=='X' and index[1][1]=='X' and index[2][1]=='X')or
      (index[0][2]=='X' and index[1][2]=='X' and index[2][2]=='X')):
                print ("player 1 is the winner!!")
                quit() 
  else:
    print("player 2's turn:")
    print('please pick the position you want to place O at:')
    position=input()
    for k in range(3):
      for h in range(3):
        if index[k][h]==int(position):
          index[k][h]="O"
        print(index[k][h], end=' ')
      print('')
    if ((index[0][0]=='O' and index[1][1]=='O' and index[2][2]=='O')or(index[0][2]=='O' and index[1][1]=='O' and index[2][0]=='O')or
      (index[0][0]=='O' and index[0][1]=='O' and index[0][2]=='O')or
      (index[1][0]=='O' and index[1][1]=='O' and index[1][2]=='O')or
      (index[2][0]=='O' and index[2][1]=='O' and index[2][2]=='O')or
      (index[0][0]=='O' and index[1][0]=='O' and index[2][0]=='O')or
      (index[0][1]=='O' and index[1][1]=='O' and index[2][1]=='O')or
      (index[0][2]=='O' and index[1][2]=='O' and index[2][2]=='O')):
                print ("player 2 is the winner!!")
                quit() 
print('it a tie!')              
    
