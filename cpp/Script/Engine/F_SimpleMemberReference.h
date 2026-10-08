// /Script/Engine.SimpleMemberReference
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h

USTRUCT()
struct FSimpleMemberReference
{
    UPROPERTY() UObject* MemberParent;  // 0x0000, size 0x8
    UPROPERTY() FName MemberName;  // 0x0008, size 0x8
    UPROPERTY() FGuid MemberGuid;  // 0x0010, size 0x10
};
