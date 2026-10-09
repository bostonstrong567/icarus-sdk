// /Script/Icarus.IcarusMissionNPCRecorderComponent
// Derives from: UIcarusNPCRecorderComponent > UIcarusCharacterRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/AI/IcarusMissionNPCRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusMissionNPCRecorderComponent : public UIcarusNPCRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FName MissionNPCDataRowName;  // 0x01E0, size 0x8
};
