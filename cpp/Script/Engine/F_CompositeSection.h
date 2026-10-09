// /Script/Engine.CompositeSection
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

USTRUCT()
struct FCompositeSection : public FAnimLinkableElement
{
public:
    UPROPERTY(EditAnywhere) FName SectionName;  // 0x0030, size 0x8
    UPROPERTY(Deprecated) float StartTime;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) FName NextSectionName;  // 0x003C, size 0x8
    UPROPERTY(EditAnywhere) TArray<UAnimMetaData*> MetaData;  // 0x0048, size 0x10
};
