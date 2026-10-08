// /Game/BP/Objects/World/Items/Deployables/Containers/UMG_ContainerWhitelist.UMG_ContainerWhitelist_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContainerWhitelist_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_AllowedCreatures;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_NearbyCreatures;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_NoneAllowed;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_NoneNearby;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* UMG_Checkbox_WhitelistOnly;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_SignType;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TempString;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCharacters;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> SupportedColors;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FontColor;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFontColorChanged FontColorChanged;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMountList_ListItem_C*> MountListItems;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ADeployable* DeployableReference;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTameInteractableComponent* InteractableComponent;  // 0x0340, size 0x8

    UFUNCTION() void BndEvt__UMG_ContainerWhitelist_ListView_AllowedCreatures_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ContainerWhitelist_ListView_AllowedCreatures_K2Node_ComponentBoundEvent_5_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ContainerWhitelist_ListView_NearbyCreatures_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ContainerWhitelist_ListView_NearbyCreatures_K2Node_ComponentBoundEvent_3_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ContainerWhitelist(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FontColorChanged__DelegateSignature(FLinearColor NewColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenerateListItems(TArray<FMountSaveData>& OutNearbyMountData, TArray<UTextureRenderTarget2D*>& OutNearbyMountIcons, TArray<FMountSaveData>& OutWhitelistedMountData, TArray<UTextureRenderTarget2D*>& OutWhitelistedMountIcons);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void ProxySetWhitelist();
    UFUNCTION(BlueprintCallable) void UpdateIconList(TArray<UObject*>& Items);  // parameters 0x10
};
