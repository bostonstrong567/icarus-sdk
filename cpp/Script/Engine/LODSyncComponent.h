// /Script/Engine.LODSyncComponent
// Derives from: UActorComponent > UObject
// size 0x140, declared in Engine/Source/Runtime/Engine/Classes/Components/LODSyncComponent.h

UCLASS(Config=Engine)
class ULODSyncComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumLODs;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ForcedLOD;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FComponentSync> ComponentsToSync;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, FLODMappingData> CustomLODMapping;  // 0x00C8, size 0x50
    UPROPERTY(Transient) int32 CurrentLOD;  // 0x0118, size 0x4
    UPROPERTY(Transient) int32 CurrentNumLODs;  // 0x011C, size 0x4
    UPROPERTY(Transient) TArray<UPrimitiveComponent*> DriveComponents;  // 0x0120, size 0x10
    UPROPERTY(Transient) TArray<UPrimitiveComponent*> SubComponents;  // 0x0130, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetLODSyncDebugText() const;  // parameters 0x10
};
