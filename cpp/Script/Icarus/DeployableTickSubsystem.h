// /Script/Icarus.DeployableTickSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x70, declared in Icarus/Source/Icarus/Subsystems/World/DeployableTickSubsystem.h

UCLASS()
class UDeployableTickSubsystem : public UTickableWorldSubsystem
{
private:
    TArray<TWeakObjectPtr<ADeployable,FWeakObjectPtr>,TSizedDefaultAllocator<32> > DeployablesToTick;  // 0x0040, not reflected
    TArray<TWeakObjectPtr<UGeneratorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > GeneratorComponents;  // 0x0050, not reflected
    TArray<TWeakObjectPtr<UProcessingComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ProcessingComponents;  // 0x0060, not reflected
};
