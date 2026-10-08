// /Script/Icarus.ActorStateRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1C0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

UCLASS(Config=Engine)
class UActorStateRecorderComponent : public UIcarusStateRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSaveModifiers;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShouldReloadActorTransform;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) int32 ActorStateRecorderVersion;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FTransform ActorTransform;  // 0x00E0, size 0x30
    UPROPERTY(EditAnywhere, SaveGame) TArray<FInventorySaveData> SavedInventories;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FFLODActorComponentSaveData FLODComponentData;  // 0x0120, size 0x1C
    UPROPERTY() bool bIgnoreUIDWhenFindingOwner;  // 0x013C, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) int32 IcarusActorGUID;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSkipActorGUIDUpdate;  // 0x0144, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FName ObjectFName;  // 0x0148, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) TArray<FModifierStateSaveData> Modifiers;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FEnergyTraitRecord EnergyTraitRecord;  // 0x0160, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FWaterTraitRecord WaterTraitRecord;  // 0x0161, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FGeneratorTraitRecord GeneratorTraitRecord;  // 0x0162, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) FResourceComponentRecord ResourceComponentRecord;  // 0x0164, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) TArray<FActorIntVariableRecord> IntVariables;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FActorBoolVariableRecord> BoolVariables;  // 0x0180, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FActorNameVariableRecord> NameVariables;  // 0x0190, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FActorTextVariableRecord> TextVariables;  // 0x01A0, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FLinearColorVariableRecord> LinearColorVariables;  // 0x01B0, size 0x10

    // Virtual functions that start here:
    //   ApplyRecorderTransform, MakeRecorderTransformRelative
};
