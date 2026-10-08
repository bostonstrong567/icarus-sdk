// /Script/Engine.StructRedirect
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FStructRedirect
{
    UPROPERTY() FName OldStructName;  // 0x0000, size 0x8
    UPROPERTY() FName NewStructName;  // 0x0008, size 0x8
};
