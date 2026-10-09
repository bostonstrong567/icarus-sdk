// /Script/Icarus.PrebuiltRestoreSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/Subsystems/World/PrebuiltRestoreSubsystem.h

UCLASS(Config=Game)
class UPrebuiltRestoreSubsystem : public UTickableWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Config) bool bEnableTimeSlicedPrebuiltLoad;  // 0x0040, size 0x1
    UPROPERTY(Config) FSoftClassPath DefaultPrebuiltStructureClass;  // 0x0048, size 0x18
    UPROPERTY(Config) int32 MaxBlobDeserializesPerFrame;  // 0x0060, size 0x4
    UPROPERTY(Config) int32 MaxBlobResolvesPerFrame;  // 0x0064, size 0x4
    UPROPERTY(Config) int32 MaxGridPiecesPerFrame;  // 0x0068, size 0x4
    UPROPERTY(Config) int32 MaxStitchesPerFrame;  // 0x006C, size 0x4
    UPROPERTY(Config) int32 MaxActivationsPerFrame;  // 0x0070, size 0x4
private:
    TArray<UPrebuiltRestoreSubsystem::FPrebuiltRestoreRequest,TSizedDefaultAllocator<32> > Queue;  // 0x0078, not reflected
    UPROPERTY(Transient) TArray<UIcarusStateRecorderComponent*> ActiveTransientRecorders;  // 0x0088, size 0x10
    bool bIsFlushing;  // 0x0098, not reflected
};
