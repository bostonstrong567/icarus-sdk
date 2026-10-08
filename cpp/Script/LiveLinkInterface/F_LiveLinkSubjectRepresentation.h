// /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
// size 0x10, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkRole.h

USTRUCT()
struct FLiveLinkSubjectRepresentation
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkSubjectName Subject;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ULiveLinkRole> Role;  // 0x0008, size 0x8
};
