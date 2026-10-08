// /Script/LiveLink.LiveLinkInstance
// Derives from: UAnimInstance > UObject
// size 0x2C0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkInstance.h

UCLASS(Transient)
class ULiveLinkInstance : public UAnimInstance
{
public:
    UPROPERTY(Transient) ULiveLinkRetargetAsset* CurrentRetargetAsset;  // 0x02B8, size 0x8

    UFUNCTION(BlueprintCallable) void SetRetargetAsset(TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSubject(FLiveLinkSubjectName SubjectName);  // parameters 0x8
};
