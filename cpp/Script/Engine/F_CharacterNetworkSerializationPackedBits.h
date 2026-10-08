// /Script/Engine.CharacterNetworkSerializationPackedBits
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h

USTRUCT()
struct FCharacterNetworkSerializationPackedBits
{

    // Not reflected:
    TBitArray<TInlineAllocator<32,TSizedDefaultAllocator<32> > > DataBits;  // 0x0000
    UPackageMap * SavedPackageMap;  // 0x0090
};
