// /Script/CoreUObject.DynamicClass
// Derives from: UClass > UStruct > UField > UObject
// size 0x2B0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UDynamicClass : public UClass
{
public:
    TArray<UObject *,TSizedDefaultAllocator<32> > MiscConvertedSubobjects;  // 0x0230, not reflected
    TArray<UField *,TSizedDefaultAllocator<32> > ReferencedConvertedFields;  // 0x0240, not reflected
    TArray<UObject *,TSizedDefaultAllocator<32> > UsedAssets;  // 0x0250, not reflected
    TArray<UObject *,TSizedDefaultAllocator<32> > DynamicBindingObjects;  // 0x0260, not reflected
    TArray<UObject *,TSizedDefaultAllocator<32> > ComponentTemplates;  // 0x0270, not reflected
    TArray<UObject *,TSizedDefaultAllocator<32> > Timelines;  // 0x0280, not reflected
    TArray<TTuple<FName,UClass *>,TSizedDefaultAllocator<32> > ComponentClassOverrides;  // 0x0290, not reflected
    UObject * AnimClassImplementation;  // 0x02A0, not reflected
    void (*)(UDynamicClass *) DynamicClassInitializer;  // 0x02A8, not reflected
};
