// /Script/Icarus.IcarusCriticalHitComponent
// Derives from: UActorComponent > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Systems/Damage/IcarusCriticalHitComponent.h

UCLASS(Config=Engine)
class UIcarusCriticalHitComponent : public UActorComponent
{
public:
    UFUNCTION(BlueprintImplementableEvent) void BP_SetDebug(bool bDebug);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_SetIgnoreDamage(bool bIgnore);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_SetLuckyBuffer(float NewLuckyBuffer);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetDebug() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIgnoreDamage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetLuckyBuffer() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetCriticalHitConfig(const FName& Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetDebug(bool bDebug);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetIgnoreDamage(bool bIgnore);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetLuckyBuffer(float NewLuckyBuffer);  // parameters 0x4
};
