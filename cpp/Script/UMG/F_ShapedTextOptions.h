// /Script/UMG.ShapedTextOptions
// size 0x3, declared in Engine/Source/Runtime/UMG/Public/Components/TextWidgetTypes.h

USTRUCT()
struct FShapedTextOptions
{
public:
    UPROPERTY(EditAnywhere) uint8 bOverride_TextShapingMethod : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverride_TextFlowDirection : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETextShapingMethod TextShapingMethod;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETextFlowDirection TextFlowDirection;  // 0x0002, size 0x1
};
