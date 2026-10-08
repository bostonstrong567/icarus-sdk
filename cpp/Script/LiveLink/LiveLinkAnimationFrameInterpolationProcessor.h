// /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// Derives from: ULiveLinkBasicFrameInterpolationProcessor > ULiveLinkFrameInterpolationProcessor > UObject
// size 0x50, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h

UCLASS(EditInlineNew)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1> Instance;  // 0x0040, private
};
