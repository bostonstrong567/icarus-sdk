// /Script/FieldSystemEngine.FieldSystem
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemAsset.h

UCLASS()
class UFieldSystem : public UObject
{
public:
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> > Commands;  // 0x0028, not reflected
};
