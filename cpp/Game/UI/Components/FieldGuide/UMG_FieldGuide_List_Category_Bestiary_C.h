// /Game/UI/Components/FieldGuide/UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C
// Derives from: UUMG_FieldGuide_List_Category_C > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_List_Category_Bestiary_C : public UUMG_FieldGuide_List_Category_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTerrainsRowHandle Map;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresRowHandle Atmosphere;  // 0x02D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterBestiary FilterBestiary;  // 0x02F0, size 0x10

    UFUNCTION(BlueprintCallable) void ClickedInternal();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterBestiary__DelegateSignature(FTerrainsRowHandle Map, FAtmospheresRowHandle Atmosphere);  // parameters 0x30
};
