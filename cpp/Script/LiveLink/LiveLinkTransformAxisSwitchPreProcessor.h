// /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// Derives from: ULiveLinkFramePreProcessor > UObject
// size 0x58, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h

UCLASS(EditInlineNew)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) ELiveLinkAxis FrontAxis;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) ELiveLinkAxis RightAxis;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) ELiveLinkAxis UpAxis;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere) bool bUseOffsetPosition;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere) bool bUseOffsetOrientation;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere) FVector OffsetPosition;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FRotator OffsetOrientation;  // 0x003C, size 0xC
    TSharedPtr<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1> Instance;  // 0x0048, not reflected
};
