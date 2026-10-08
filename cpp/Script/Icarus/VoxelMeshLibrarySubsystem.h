// /Script/Icarus.VoxelMeshLibrarySubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Subsystems/World/VoxelMeshLibrarySubsystem.h

UCLASS()
class UVoxelMeshLibrarySubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<FString,FMeshSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMeshSectionData,0> > VoxelMeshLibrary;  // 0x0030, private
};
