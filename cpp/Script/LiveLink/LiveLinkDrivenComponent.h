// /Script/LiveLink.LiveLinkDrivenComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkDrivenComponent.h

UCLASS(NotPlaceable, Config=Engine)
class UDEPRECATED_LiveLinkDrivenComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) FLiveLinkSubjectName SubjectName;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) FName ActorTransformBone;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) bool bModifyActorTransform;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere) bool bSetRelativeLocation;  // 0x00C1, size 0x1
private:
    FLiveLinkClientReference ClientRef;  // 0x00C2, not reflected
};
