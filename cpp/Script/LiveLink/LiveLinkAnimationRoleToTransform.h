// /Script/LiveLink.LiveLinkAnimationRoleToTransform
// Derives from: ULiveLinkFrameTranslator > UObject
// size 0x40, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/Translator/LiveLinkAnimationRoleToTransform.h

UCLASS(EditInlineNew)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0028, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1> Instance;  // 0x0030, private
};
