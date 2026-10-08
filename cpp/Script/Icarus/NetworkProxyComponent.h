// /Script/Icarus.NetworkProxyComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Icarus/Source/Icarus/Controllers/NetworkProxyComponent.h

UCLASS(Config=Engine)
class UNetworkProxyComponent : public UActorComponent
{
public:
    UPROPERTY() AIcarusPlayerCharacter* PlayerCharacter;  // 0x00B0, size 0x8

    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddExperience(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddExperienceDebt(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddFood(int32 Food, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddHealth(int32 Health, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddOxygen(int32 Oxygen, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddRadiation(int32 Radiation);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddStamina(int32 Stamina, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddStat(FStatsEnum Stat, int32 Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_AddWater(int32 Water, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_ClearInventory();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_ClearStats();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetBodyTemperature(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetFood(int32 Food, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetHealth(int32 Health, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetOxygen(int32 Oxygen, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetServerTimeDilation(float TimeDilation);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetStamina(int32 Stamina, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_SetWater(int32 Water, bool bPercent);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Cheat_UnlockCharacterAllFlags();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void CheatingNotification();
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void Client_ShowLoadingMessage();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Proxy_SortInventory(UInventory* Inventory, TEnumAsByte<EInventorySortType> SortType);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Proxy_SyncCharacterTalent(UObject* TalentHandler, FTalentsRowHandle Talent, FTalentModelData TalentData);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Proxy_UnlockAccountFlags(TArray<FAccountFlagsRowHandle> AccountFlags);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_TryReloadPersistentMount(FMountSaveData MountSaveData, FVector DesiredSpawnLocation);  // parameters 0x7C
    UFUNCTION(BlueprintCallable) void TryReloadPersistentMountWithGUID(FString DatabaseItemGUID, const FVector& DesiredSpawnLocation);  // parameters 0x1C
};
