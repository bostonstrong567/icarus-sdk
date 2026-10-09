// /Script/Icarus.FieldGuideCategorySubcategoryInfo
// size 0x20, declared in Icarus/Source/Icarus/FieldGuide/FieldGuideFunctionLibrary.h

USTRUCT()
struct FFieldGuideCategorySubcategoryInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFieldGuideSubcategoriesRowHandle> Subcategories;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FItemsStaticRowHandle> OverflowItems;  // 0x0010, size 0x10
};
