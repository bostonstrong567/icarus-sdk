// /Script/Icarus.MultiPointAudioSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioSubsystem.h

UCLASS()
class UMultiPointAudioSubsystem : public UTickableWorldSubsystem
{
private:
    TQueue<TWeakObjectPtr<UMultiPointAudioEmitter,FWeakObjectPtr>,1> PendingEmitters;  // 0x0040, not reflected
};
