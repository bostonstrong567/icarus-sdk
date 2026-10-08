// /Game/BP/Quests/Components/BPQC_DynamicLocation.BPQC_DynamicLocation_C
// Derives from: UActorComponent > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_DynamicLocation_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLocationFound LocationFound;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Maximum_Distance;  // 0x00C8, size 0x4, named "Maximum Distance"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Minimum_Distance;  // 0x00CC, size 0x4, named "Minimum Distance"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* Query_Template;  // 0x00D0, size 0x8, named "Query Template"

    UFUNCTION() void ExecuteUbergraph_BPQC_DynamicLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindLocation(int32 MaximumDistance, int32 MinimumDistance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LocationFound__DelegateSignature(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnGenerateSpawnPoint(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
};
