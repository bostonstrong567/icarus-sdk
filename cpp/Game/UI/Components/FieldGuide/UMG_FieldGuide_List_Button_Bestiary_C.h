// /Game/UI/Components/FieldGuide/UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_List_Button_Bestiary_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Discovered;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle Creature;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectedCreature SelectedCreature;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Percent;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* HoverSound;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x02B8, size 0x1

    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_List_Button_Bestiary(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SelectedCreature__DelegateSignature(FBestiaryDataRowHandle Creature, int32 Percent);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetSelected(bool Selected);  // parameters 0x1
};
