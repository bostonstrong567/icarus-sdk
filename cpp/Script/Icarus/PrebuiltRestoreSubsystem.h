// /Script/Icarus.PrebuiltRestoreSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/Subsystems/World/PrebuiltRestoreSubsystem.h

UCLASS(Config=Game)
class UPrebuiltRestoreSubsystem : public UTickableWorldSubsystem
{
public:
    UPROPERTY(Config) bool bEnableTimeSlicedPrebuiltLoad;  // 0x0040, size 0x1
    UPROPERTY(Config) FSoftClassPath DefaultPrebuiltStructureClass;  // 0x0048, size 0x18
    UPROPERTY(Config) int32 MaxBlobDeserializesPerFrame;  // 0x0060, size 0x4
    UPROPERTY(Config) int32 MaxBlobResolvesPerFrame;  // 0x0064, size 0x4
    UPROPERTY(Config) int32 MaxGridPiecesPerFrame;  // 0x0068, size 0x4
    UPROPERTY(Config) int32 MaxStitchesPerFrame;  // 0x006C, size 0x4
    UPROPERTY(Config) int32 MaxActivationsPerFrame;  // 0x0070, size 0x4
    UPROPERTY(Transient) TArray<UIcarusStateRecorderComponent*> ActiveTransientRecorders;  // 0x0088, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<UPrebuiltRestoreSubsystem::FPrebuiltRestoreRequest,TSizedDefaultAllocator<32> > Queue;  // 0x0078, private
    bool bIsFlushing;  // 0x0098, private
};
