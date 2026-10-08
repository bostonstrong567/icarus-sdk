// /Script/Icarus.FLODLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/FLOD/FLODLibrary.h

UCLASS()
class UFLODLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void DestroyAllBurntTreeInstances(UObject* WorldContextObject, UFLODRecord* Record);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFLODInstanceFFLODInstance(FFLODRecordInstance A, FFLODRecordInstance B);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FFLODInstanceIDFFLODInstanceID(FFLODInstanceID A, FFLODInstanceID B);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static AActor* FindActorFromInstanceID(const FFLODInstanceID& InstanceID, uint8 StateMask);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static AFLOD* GetFLOD(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FFLODInstanceID> GetFLODInstancesOverlappingSphere(UObject* WorldContextObject, const FVector& Location, float Radius, const FGameplayTagQuery& TagQuery, bool bIncludeDestroyed);  // parameters 0x78
    UFUNCTION(BlueprintCallable) static TArray<FFLODInstanceID> GetFLODInstancesOverlappingSphereWithContext(UObject* ContextObject, const FVector& Location, float Radius, const FGameplayTagQuery& TagQuery, bool bIncludeDestroyed);  // parameters 0x78
    UFUNCTION(BlueprintCallable) static bool GetLargeRockRespawnSetting();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool GetOpenWorldRespawnFibreSetting();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool IsInstanceIndexDestroyed(UObject* WorldContextObject, const FFLODInstanceID& InstanceID);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void RestoreRestorableFoliage(UObject* WorldContextObject, UFLODRecord* Record);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void RestoreRestorableRocks(UObject* WorldContextObject, UFLODRecord* Record);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void RestoreTreesInRadius(UObject* WorldContextObject, const FVector& Location, float Radius);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetFLODRecordDesiredInstanceLevel(UFLODRecord* Record, int32 InstanceIndex, int32 LevelIndex, bool bState);  // parameters 0x11
};
