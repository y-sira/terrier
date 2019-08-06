#include "util/tpcc/tpcc_plan_test.h"
#include "util/test_harness.h"

namespace terrier {

struct TpccPlanStockLevelTests : public TpccPlanTest {};

// NOLINTNEXTLINE
TEST_F(TpccPlanStockLevelTests, GetDistrictOrderId) {
  // From OLTPBenchmark (L37-40)
  // SELECT D_NEXT_O_ID
  //   FROM DISTRICT
  //  WHERE D_W_ID = ?
  //    AND D_ID = ?
  EXPECT_TRUE(false);
}

// NOLINTNEXTLINE
TEST_F(TpccPlanStockLevelTests, GetCountStock) {
  // From OLTPBenchmark (L43-51)
  // SELECT COUNT(DISTINCT (S_I_ID)) AS STOCK_COUNT
  //   FROM ORDER-LINE, STOCK
  //  WHERE OL_W_ID = ?
  //    AND OL_D_ID = ?
  //    AND OL_O_ID < ?
  //    AND OL_O_ID >= ?
  //    AND S_W_ID = ?
  //    AND S_I_ID = OL_I_ID
  //    AND S_QUANTITY < ?
  EXPECT_TRUE(false);
}

}  // namespace terrier