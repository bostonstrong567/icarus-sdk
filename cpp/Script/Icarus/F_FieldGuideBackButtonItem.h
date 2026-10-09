// /Script/Icarus.FieldGuideBackButtonItem
// size 0x30, declared in Icarus/Source/Icarus/FieldGuide/FieldGuideFunctionLibrary.h

USTRUCT()
struct FFieldGuideBackButtonItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemRow;  // 0x0018, size 0x18
};
