// /Game/UI/Debug/ResourceNetworkInspector/UMG_ResourceNetworkInspector.UMG_ResourceNetworkInspector_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4D9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceNetworkInspector_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* MainBackground;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* NetworkSummary;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* NetworkTypeContainer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoStorageDevicesMessage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NotConnectedMessage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ObjectNameHeading;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SelectADeviceMessage;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SumInText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SummaryRow;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SumOutText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TotalRate;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VB_NetworkObjectList;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VB_StorageObjectList;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum CurrentNetworkType;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* CachedDevice;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AResourceSplineActorBase* CachedSpline;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Accum;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateFrequency;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_ResourceNetworkInspector_NetworkIcon_C*> NetworkIcons;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UResourceNetworkComponent*, UUMG_ResourceNetworkInspector_Row_C*> RowLookup;  // 0x0308, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UResourceNetworkComponent*, UUMG_ResourceNetworkInspector_StorageRow_C*> StorageRowLookup;  // 0x0358, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum LimitResourceTypeTo;  // 0x03A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NoTargetFadeOutDelay;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FadeOutStartTimer;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeTarget;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UUMG_ResourceNetworkInspector_Row_C*> DataRowLookup;  // 0x03D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UUMG_ResourceNetworkInspector_StorageRow_C*> DataStorageRowLookup;  // 0x0420, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResourceNetworkInspectorData EDITOR_DummyData;  // 0x0470, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeInSpeed;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeOutSpeed;  // 0x04D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WasVisibleBeforeMenu;  // 0x04D8, size 0x1

    UFUNCTION(BlueprintCallable) void AddDeviceRow(UResourceNetworkComponent* Device);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearInfo();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CycleNetworkType();
    UFUNCTION(BlueprintCallable) void EnterDeployableMenuState();
    UFUNCTION(BlueprintCallable) void EnterUIMenuState();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceNetworkInspector(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExitDeployableMenuState();
    UFUNCTION(BlueprintCallable) void FadeWindowIn();
    UFUNCTION(BlueprintCallable) void FadeWindowOut();
    UFUNCTION(BlueprintCallable) void FadeWindowOutInstant();
    UFUNCTION(BlueprintCallable) void GetAvailableNetworkTypes(TArray<FIcarusResourcesEnum>& ResourceTypes);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetConnectedNetworkId(FIcarusResourcesEnum ResourceType, int32& NetworkId);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDeviceDisplayName(AActor* Actor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetNextAvailableNetworkType(FIcarusResourcesEnum& NextType);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetResourceName(EIcarusResourceType ResourceType, FText& ResourceName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTotalFlowRateText(int32 Value, FText& Result);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void InitFromData(FResourceNetworkInspectorData Data);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) void NetworkToId(AResourceNetwork* Network, int32& Id);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnUIDynamicWidgetDisplayed();
    UFUNCTION(BlueprintCallable) void OnUIEscapeMenuOpened();
    UFUNCTION(BlueprintCallable) void OnUIHidePanelDisplay();
    UFUNCTION(BlueprintCallable) void OnUIMenuOpened();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDeviceTarget(AIcarusActor* Device);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetNetworkTypeFromFirstFound();
    UFUNCTION(BlueprintCallable) void SetNewDisplayData(FResourceNetworkInspectorData NetworkData);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SetSplineTarget(AResourceSplineActorBase* Spline);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTarget();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update();
    UFUNCTION(BlueprintCallable) void UpdateDisplayData(FResourceNetworkInspectorData NetworkData);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void UpdateFromData(FResourceNetworkInspectorData Data);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void UpdateWindowFade(float DeltaTime);  // parameters 0x4
};
