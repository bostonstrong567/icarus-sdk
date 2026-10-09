// /Script/LiveLink.LiveLinkAnimationRoleToTransform
// Derives from: ULiveLinkFrameTranslator > UObject
// size 0x40, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/Translator/LiveLinkAnimationRoleToTransform.h

UCLASS(EditInlineNew)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0028, size 0x8
private:
    TSharedPtr<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1> Instance;  // 0x0030, not reflected
};
