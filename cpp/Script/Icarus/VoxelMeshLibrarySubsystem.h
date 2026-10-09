// /Script/Icarus.VoxelMeshLibrarySubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Subsystems/World/VoxelMeshLibrarySubsystem.h

UCLASS()
class UVoxelMeshLibrarySubsystem : public UWorldSubsystem
{
private:
    TMap<FString,FMeshSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMeshSectionData,0> > VoxelMeshLibrary;  // 0x0030, not reflected
};
