// /Game/BP/Objects/World/Items/WorldObjects/Notes/UMG_Interactable_Note.UMG_Interactable_Note_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x4E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Interactable_Note_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Note_Image;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* Note_Text;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_57;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_0;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x02D0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* OpenNoteAudio;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* CloseNoteAudio;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuiltString;  // 0x04D0, size 0x18

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Interactable_Note(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetNoteRow(FCollectableNotesRowHandle& NoteRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Initialise(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void ToPercent(int32 Current, int32 Max, float& Percent);  // parameters 0xC
};
