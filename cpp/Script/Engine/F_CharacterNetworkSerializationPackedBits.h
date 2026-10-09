// /Script/Engine.CharacterNetworkSerializationPackedBits
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h

USTRUCT()
struct FCharacterNetworkSerializationPackedBits
{
public:
    TBitArray<TInlineAllocator<32,TSizedDefaultAllocator<32> > > DataBits;  // 0x0000, not reflected
private:
    UPackageMap * SavedPackageMap;  // 0x0090, not reflected
};
