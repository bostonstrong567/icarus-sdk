// /Script/LiveLinkInterface.LiveLinkSubjectSettings
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkSubjectSettings.h

UCLASS()
class ULiveLinkSubjectSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<ULiveLinkFramePreProcessor*> PreProcessors;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Instanced) ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) TArray<ULiveLinkFrameTranslator*> Translators;  // 0x0040, size 0x10
    UPROPERTY() TSubclassOf<ULiveLinkRole> Role;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FFrameRate FrameRate;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) bool bRebroadcastSubject;  // 0x0060, size 0x1
};
