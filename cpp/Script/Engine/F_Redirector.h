// /Script/Engine.Redirector
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRedirector
{
public:
    UPROPERTY() FName OldName;  // 0x0000, size 0x8
    UPROPERTY() FName NewName;  // 0x0008, size 0x8
};
