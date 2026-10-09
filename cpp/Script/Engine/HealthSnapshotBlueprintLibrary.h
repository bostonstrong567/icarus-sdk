// /Script/Engine.HealthSnapshotBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/ProfilingDebugging/HealthSnapshot.h

UCLASS()
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(Exec, BlueprintCallable) static void LogPerformanceSnapshot(FString SnapshotTitle, bool bResetStats);  // parameters 0x11
    UFUNCTION(Exec, BlueprintCallable) static void StartPerformanceSnapshots();
    UFUNCTION(Exec, BlueprintCallable) static void StopPerformanceSnapshots();
};
