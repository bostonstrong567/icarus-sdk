// /Script/Icarus.CriticalHitReceiver
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Damage/CriticalHitReceiver.h

UCLASS(Abstract)
class UCriticalHitReceiver : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
};
