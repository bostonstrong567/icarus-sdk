// /Script/MRMesh.MeshReconstructorBase
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/MRMesh/Public/MeshReconstructorBase.h

UCLASS()
class UMeshReconstructorBase : public UObject
{
public:

    UFUNCTION() void ConnectMRMesh(UMRMeshComponent* Mesh);  // parameters 0x8
    UFUNCTION() void DisconnectMRMesh();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReconstructionPaused() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReconstructionStarted() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PauseReconstruction();
    UFUNCTION(BlueprintCallable) void StartReconstruction();
    UFUNCTION(BlueprintCallable) void StopReconstruction();

    // Virtual functions that start here:
    //   ConnectMRMesh, DisconnectMRMesh, IsReconstructionPaused, IsReconstructionStarted
    //   PauseReconstruction, StartReconstruction, StopReconstruction
};
