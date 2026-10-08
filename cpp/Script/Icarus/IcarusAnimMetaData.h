// /Script/Icarus.IcarusAnimMetaData
// Derives from: UAnimMetaData > UObject
// size 0x30, declared in Icarus/Source/Icarus/Animation/IcarusAnimMetaData.h

UCLASS(Const, EditInlineNew)
class UIcarusAnimMetaData : public UAnimMetaData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SectionWeight;  // 0x0028, size 0x4
};
