// /Script/Icarus.IcarusNPCRecorderComponent
// Derives from: UIcarusCharacterRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1E0, declared in Icarus/Source/Icarus/AI/IcarusNPCRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusNPCRecorderComponent : public UIcarusCharacterRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) int32 FoodLevel;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 WaterLevel;  // 0x01CC, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 OxygenLevel;  // 0x01D0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 Stamina;  // 0x01D4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FName AISetupRowName;  // 0x01D8, size 0x8
};
