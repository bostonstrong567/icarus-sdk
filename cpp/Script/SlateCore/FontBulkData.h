// /Script/SlateCore.FontBulkData
// Derives from: UObject
// size 0x78, declared in Engine/Source/Runtime/SlateCore/Public/Fonts/FontBulkData.h

UCLASS()
class UFontBulkData : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FUntypedBulkData2<unsigned char> BulkData;  // 0x0028, private
    FWindowsCriticalSection CriticalSection;  // 0x0050, private
};
