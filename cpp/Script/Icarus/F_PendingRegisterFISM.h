// /Script/Icarus.PendingRegisterFISM
// size 0xC, declared in Icarus/Source/Icarus/Systems/FLOD/FLOD.h

USTRUCT()
struct FPendingRegisterFISM
{
public:
    UPROPERTY() int32 CachedDescriptionIndex;  // 0x0000, size 0x4
    UPROPERTY(Instanced) TWeakObjectPtr<UFLODFISMComponent> FISM;  // 0x0004, size 0x8
};
