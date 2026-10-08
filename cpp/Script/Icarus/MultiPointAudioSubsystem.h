// /Script/Icarus.MultiPointAudioSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioSubsystem.h

UCLASS()
class UMultiPointAudioSubsystem : public UTickableWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TQueue<TWeakObjectPtr<UMultiPointAudioEmitter,FWeakObjectPtr>,1> PendingEmitters;  // 0x0040, private
};
