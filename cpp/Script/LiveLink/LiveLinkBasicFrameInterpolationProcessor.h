// /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
// Derives from: ULiveLinkFrameInterpolationProcessor > UObject
// size 0x40, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h

UCLASS(EditInlineNew)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
    UPROPERTY(EditAnywhere) bool bInterpolatePropertyValues;  // 0x0028, size 0x1
private:
    TSharedPtr<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1> BaseInstance;  // 0x0030, not reflected
};
