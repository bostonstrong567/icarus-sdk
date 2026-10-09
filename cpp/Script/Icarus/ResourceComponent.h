// /Script/Icarus.ResourceComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x210, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UResourceComponent : public UTraitComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnDeviceOnStateChanged OnDeviceOnStateChanged;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDeviceConnectionChanged OnDeviceConnectionChanged;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnBrownOutStrengthChanged OnBrownOutStrengthChanged;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoFill;  // 0x0100, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDeviceResourceChanged OnDeviceResourceChanged;  // 0x0108, size 0x10
    bool bJustRegisteredProcessorFlows;  // 0x0118, not reflected
private:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) bool bDeviceTurnedOn;  // 0x0119, size 0x1
    UPROPERTY(Instanced) TWeakObjectPtr<UEnergyComponent> EnergyComponent;  // 0x011C, size 0x8
    const FResourceNetworkData * EnergyData;  // 0x0128, not reflected
    UPROPERTY(Instanced) TWeakObjectPtr<UWaterComponent> WaterComponent;  // 0x0130, size 0x8
    const FResourceNetworkData * WaterData;  // 0x0138, not reflected
    UPROPERTY(Instanced) TWeakObjectPtr<UFuelComponent> FuelComponent;  // 0x0140, size 0x8
    const FResourceNetworkData * FuelData;  // 0x0148, not reflected
    UPROPERTY(Instanced) TWeakObjectPtr<UOxygenComponent> OxygenComponent;  // 0x0150, size 0x8
    const FResourceNetworkData * OxygenData;  // 0x0158, not reflected
    UPROPERTY(Instanced) TWeakObjectPtr<UCrudeOilComponent> CrudeOilComponent;  // 0x0160, size 0x8
    const FResourceNetworkData * CrudeOilData;  // 0x0168, not reflected
    UPROPERTY(Instanced) TWeakObjectPtr<URefinedOilComponent> RefinedOilComponent;  // 0x0170, size 0x8
    const FResourceNetworkData * RefinedOilData;  // 0x0178, not reflected
    UPROPERTY(Instanced) TWeakObjectPtr<UInventoryComponent> InventoryComponent;  // 0x0180, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UFillableComponent> FillableComponent;  // 0x0188, size 0x8
    FIcarusResourcesEnum StorageType;  // 0x0190, not reflected
    bool bStorageIsInFlowOnly;  // 0x01A0, not reflected
    int32 StorageFlowRateMax;  // 0x01A4, not reflected
    int32 StorageMax;  // 0x01A8, not reflected
    float StorageFlowRatePartialUnits;  // 0x01AC, not reflected
    int32 StorageFlowRateCurrent;  // 0x01B0, not reflected
    TArray<FResourceFlowSummary,TSizedDefaultAllocator<32> > FlowSummaries;  // 0x01B8, not reflected
    TArray<TWeakObjectPtr<UResourceNetworkComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > AllResourceNetworkComponents;  // 0x01C8, not reflected
    TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32> > DynamicFlowObjects;  // 0x01D8, not reflected
    bool bDeviceJustTurnedOn;  // 0x01E8, not reflected
    bool bDeviceFlowJustChanged;  // 0x01E9, not reflected
    bool bWasManuallyTurnedOff;  // 0x01EA, not reflected
    TArray<float,TSizedDefaultAllocator<32> > PartialUnits;  // 0x01F0, not reflected
    float LastClientDataUpdateTime;  // 0x0200, not reflected
    const float IsFreshClientDataTimeLimit;  // 0x0204, not reflected
    uint32 ConnectionPriorityMask;  // 0x0208, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddOrModifyDynamicFlowSource(UObject* Source, FIcarusResourcesEnum ResourceType, float NewFlowRate, bool bConsume);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) FResourceFlowSummary BP_GetResourceFlowSummaryForType(FIcarusResourcesEnum ResourceType, bool& bWasFound);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void BP_GetResourceNetworkComponentForType(FIcarusResourcesEnum ResourceType, UResourceNetworkComponent*& ResourceNetworkComponent, EDataValid& ExecEnum) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable) int32 GetCurrentBrownOutStrength(FIcarusResourcesEnum ResourceType);  // parameters 0x14
    UFUNCTION(BlueprintCallable) bool GetDynamicFlowSourceRate(UObject* Source, FIcarusResourcesEnum ResourceType, float& FlowRate, bool& bConsume);  // parameters 0x1E
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetResourceComponentData(FResourceComponentData& OutData) const;  // parameters 0xC1
    UFUNCTION(BlueprintCallable) bool GetResourceFlowType(FIcarusResourcesEnum ResourceType, EResourceNetworkFlowType& FlowType) const;  // parameters 0x12
    UFUNCTION(BlueprintCallable) bool GetResourceStorageInfo(FIcarusResourcesEnum ResourceType, int32& Current, int32& Max) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasResourceFlowState(FIcarusResourcesEnum ResourceType) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDataFresh() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsDeviceResourceFlowActive(FIcarusResourcesEnum ResourceType) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDeviceTurnedOn() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPriorityConnection(FIcarusResourcesEnum ConnectionType) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool IsResourceFlowOptional(FIcarusResourcesEnum ResourceType, FOptionalResourceFlowsRowHandle& OptionalFlowType) const;  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsResourceStorageForType(FIcarusResourcesEnum ResourceType) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsResourceStorageInFlowOnly(FIcarusResourcesEnum ResourceType) const;  // parameters 0x11
    UFUNCTION() void OnRep_DeviceTurnedOn();
    UFUNCTION() void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void SetDeviceResourceFlowStateActive(FIcarusResourcesEnum ResourceType, bool bActive);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetPriorityConnection(bool bNewPriority, FIcarusResourcesEnum ConnectionType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ToggleDeviceOnOff();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void TryAutoTurnDeviceOn();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void TurnDeviceOff(bool bManualShutdown);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void TurnDeviceOn();
};
