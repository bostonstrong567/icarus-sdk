// /Game/BP/Mounts/BP_Saddle_NonRidable.BP_Saddle_NonRidable_C
// Derives from: AActor > UObject
// size 0x250, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Saddle_NonRidable_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SaddleMesh;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FSaddlesRowHandle SaddleDataRow;  // 0x0238, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_Saddle_NonRidable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseWithSaddleData(FSaddlesRowHandle SaddleDataRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnLoaded_8B4EC68E4BD00AEFC7C1E685110F6037(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_SaddleDataRow();
};
