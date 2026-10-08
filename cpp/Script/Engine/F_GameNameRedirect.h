// /Script/Engine.GameNameRedirect
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FGameNameRedirect
{
    UPROPERTY() FName OldGameName;  // 0x0000, size 0x8
    UPROPERTY() FName NewGameName;  // 0x0008, size 0x8
};
