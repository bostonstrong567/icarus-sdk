// /Script/Engine.MemberReference
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/MemberReference.h

USTRUCT()
struct FMemberReference
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UObject* MemberParent;  // 0x0000, size 0x8
    UPROPERTY() FString MemberScope;  // 0x0008, size 0x10
    UPROPERTY() FName MemberName;  // 0x0018, size 0x8
    UPROPERTY() FGuid MemberGuid;  // 0x0020, size 0x10
    UPROPERTY() bool bSelfContext;  // 0x0030, size 0x1
    UPROPERTY() bool bWasDeprecated;  // 0x0031, size 0x1
};
