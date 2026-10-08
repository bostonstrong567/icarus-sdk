// /Game/UI/ResourceNetworkInspector/UMG_ResourceNetworkInspector_FullScreen.UMG_ResourceNetworkInspector_FullScreen_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x4C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_FullScreen_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ConsumerList;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* LoadingDataOverlay;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NetworkTypeIcon;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NetworkTypeText;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NotConnectedText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* NotConnectedToNetworkOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PriorityDemandArrow;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PriorityDemandHeading;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PriorityDemandRateText;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ProducerList;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StandardDemandArrow;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StandardDemandBlocked;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StandardDemandHeading;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StandardDemandRateText;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StorageFlowHeading;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StorageInArrow;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* StorageInArrowGroup;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* StorageList;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StorageOutArrow;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* StorageOutArrowGroup;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StorageRateText;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SupplyArrow;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SupplyFlowHeading;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SupplyRateText;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnCloseWindow OnCloseWindow;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, UBP_ResourceNetworkInspectorListItemData_C*> SupplyDataMap;  // 0x0370, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, UBP_ResourceNetworkInspectorListItemData_C*> DemandDataMap;  // 0x03C0, size 0x50
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceComponent* TargetDevice;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum TargetResourceType;  // 0x0418, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum LastResourceType;  // 0x0428, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* SupplyArrow_MID;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* StorageOutArrow_MID;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* StandardDemandArrow_MID;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PriorityDemandArrow_MID;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* StorageInArrow_MID;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResourceNetworkInspectorData LastData;  // 0x0460, size 0x60

    UFUNCTION() void BndEvt__UMG_ResourceNetworkInspector_FullScreen_CloseButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkInspector_FullScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FormatRateValue(int32 Rate, int32 RateMax, FText& Result);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void InitArrows();
    UFUNCTION(BlueprintCallable) void InitNetworkType(FIcarusResourcesEnum NetworkType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LoadData(FResourceNetworkInspectorData Data);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void OnCloseWindow__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnReceivedNetworkInspectionData(const FResourceNetworkInspectorData& Data);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void ProcessDeviceData(const TMap<FName, UBP_ResourceNetworkInspectorListItemData_C*>& TargetMap, FIcarusResourcesEnum ResourceType, TArray<FCompactNetworkDeviceData>& Data, bool bShowPriorityBox, TArray<UBP_ResourceNetworkInspectorListItemData_C*>& SortedObjectList);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetAllArrowFlowColours(FLinearColor Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetArrowColour(UMaterialInstanceDynamic* Target, FLinearColor Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetArrowFlowColour(UMaterialInstanceDynamic* Target, FLinearColor Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetArrowFlowEnabled(UMaterialInstanceDynamic* Target, bool Enabled);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetTargetDevice(UResourceComponent* Device, FIcarusResourcesEnum ResourceType);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TryDetermineDeviceAndNetwork(bool& Success, UResourceComponent*& FoundDevice, AResourceSplineActorBase*& Spline, FIcarusResourcesEnum& TargetNetworkType);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void UpdateArrowAndFlowText(UMaterialInstanceDynamic* ArrowMID, UTextBlock* Heading, UTextBlock* RateText, bool Enabled);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void UpdateDisconnectedOverlay();
    UFUNCTION(BlueprintCallable) bool WantsNotConnectedToNetworkOverlay();  // parameters 0x1
};
